#ifndef PROTOCOL_H
#define PROTOCOL_H
#define BUF_MAX_LEN 1000

//    head  /   /  body   /
//-- -- -- --    ---.......
//byte1-2:data body length,byte 3-4:protocol version, byte 5-6:operation,byte 7-8:reply rst,9->:body
class Protocol{
public :
    enum VER{
        VERSION=1
    };
    enum LEN{
        HEAD_LENGTH=8
    };

    enum AABB{
        SS=0,
        PP=1
    };
    enum CMD{
        GET_CONFIG,
        ADD_CAMERA,
        DEL_CAMERA,
        MOD_CAMERA
    };
    enum RET{
        RET_SUCCESS,
        RET_FAIL,
        RET_REFRESH
     };
    enum PORTS{
        SERVER_PORT=12345,
        SERVER_DATA_OUTPUT_PORT=12346,
        CLIENT_REPORTER_PORT=12347,
        SERVER_REPORTER_PORT=12348
    };

    static void pkg_set_len(char *c,int len)//encode length of pkg
    {
        char *dst=c;
        quint16 *p_len=( quint16 *)dst;
        *p_len=len;
    }
    static int pkg_get_len(char *c)//decode length of pkg
    {
        char *dst=c;
        quint16 *p_len=( quint16 *)dst;
        return *p_len;
    }
    static void pkg_set_ret(char *c,int ret)//encode ret of pkg
    {
        char *dst=c+2+2+2;
        quint16 *p_ret=( quint16 *)dst;
        *p_ret=ret;
    }
    static int pkg_get_ret(char *c)//decode ret of pkg
    {
        char *dst=c+2+2+2;
        quint16 *p_ret=( quint16 *)dst;
        return *p_ret;
    }
    static void pkg_set_version(char *c,int version)
    {
        char *dst=c+2;
        quint16 *p_version=( quint16 *)dst;
        *p_version=version;
    }
    static int pkg_get_version(char *c)
    {
        char *dst=c+2;
        quint16 *p_version=( quint16 *)dst;
        return *p_version;
    }
    static void pkg_set_op(char *c,int op)
    {
        char *dst=c+2+2;
        quint16 *p_op=( quint16 *)dst;
        *p_op=op;
    }
    static int pkg_get_op(char *c)
    {
        char *dst=c+2+2;
        quint16 *p_op=( quint16 *)dst;
        return *p_op;
    }

//    static int pkg_get_len(QByteArray &ba)
//    {
//              return 0;
//    }
//    static void pkg_set_version(QByteArray &ba)
//    {

//    }
//    static int pkg_get_version(QByteArray &ba)
//    {
//              return ba;
//    }
//    static void pkg_set_op(QByteArray &ba)
//    {

//    }
//    static int pkg_get_get(QByteArray &ba)
//    {
//              return ba;
//    }



    static int encode_configuration_request(char *buf){
     //   pkg_set_len(ba);
        memset(buf,0,BUF_MAX_LEN);
        pkg_set_len(buf,0);
        pkg_set_version(buf,VERSION);
        pkg_set_op(buf,GET_CONFIG);
        pkg_set_ret(buf,RET_SUCCESS);
        return HEAD_LENGTH;
    }
    static int encode_configuration_reply(char *buf,int len,int ret){
     //   pkg_set_len(ba);
     //   memset(buf,0,BUF_MAX_LEN);
        pkg_set_len(buf,len);
        pkg_set_version(buf,VERSION);
        pkg_set_op(buf,GET_CONFIG);
        pkg_set_ret(buf,ret);
        return HEAD_LENGTH;
    }
    static int encode_addcam_request(char *buf,int len){
     //   pkg_set_len(ba);
        memset(buf,0,BUF_MAX_LEN);
        pkg_set_len(buf,len);
        pkg_set_version(buf,VERSION);
        pkg_set_op(buf,ADD_CAMERA);
        pkg_set_ret(buf,RET_SUCCESS);
        return HEAD_LENGTH+len;
    }
    static int encode_delcam_request(char *buf,int index){
     //   pkg_set_len(ba);
        memset(buf,0,BUF_MAX_LEN);
        pkg_set_len(buf,0);
        pkg_set_version(buf,VERSION);
        pkg_set_op(buf,DEL_CAMERA);
        pkg_set_ret(buf,index);
        return HEAD_LENGTH;
    }
    static int get_operation(char *buf){
        return pkg_get_op(buf);
    }
    static int get_length(char *buf){
        return pkg_get_len(buf);
    }
    static int get_cam_index(char *buf){
        return pkg_get_ret(buf);
    }
};

#endif // PROTOCOL_H

