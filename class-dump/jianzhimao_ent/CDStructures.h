//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct APTaskInfoData {
    unsigned char _field1[30];
};

struct BMMapMsgObserver {
    CDUnknownFunctionPointerType *_field1;
};

struct BMMapStatus {
    double fLevel;
    double fRotation;
    double fOverlooking;
    struct BMPoint ptCenter;
    struct BMQuadrangle mapRound;
    struct BMRect winRound;
    double centerXoffset;
    double centerYoffset;
};

struct BMPoint {
    double x;
    double y;
};

struct BMQuadrangle {
    struct BMPoint lb;
    struct BMPoint lt;
    struct BMPoint rt;
    struct BMPoint rb;
};

struct BMRect {
    long long left;
    long long right;
    long long top;
    long long bottom;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CAssoc;

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CMapGesture {
    CDUnknownFunctionPointerType *_vptr$CMapGesture;
    int m_bMouseDown;
    struct CVPoint m_ptMove;
    struct CVPoint m_ptUp;
    struct CVPoint m_ptDown;
    unsigned long long m_LastDownTime;
    float m_level;
    struct CVArray<tag_PaoPaoAttribute, tag_PaoPaoAttribute &> m_PaopaoAtt;
    struct IVMapbaseInterface *m_mapControl;
    float m_minZoomLevel;
    float m_maxZoomLevel;
};

struct CMapModeEngine {
    CDUnknownFunctionPointerType *_vptr$CMapModeEngine;
    struct IVMapbaseInterface *m_mapControl;
};

struct CSearchInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct CVArray<_baidu_vi::CVBundle, _baidu_vi::CVBundle &> {
    CDUnknownFunctionPointerType *_field1;
    struct CVBundle *_field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct CVArray<_baidu_vi::CVString, _baidu_vi::CVString &> {
    CDUnknownFunctionPointerType *_field1;
    struct CVString *_field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct CVArray<tag_PaoPaoAttribute, tag_PaoPaoAttribute &> {
    CDUnknownFunctionPointerType *_vptr$CVArray;
    struct tag_PaoPaoAttribute *m_pData;
    int m_iSize;
    int m_iMaxSize;
    int m_iGrowBy;
    int m_iTemp;
};

struct CVBundle {
    struct CVMapStringToPtr _field1;
};

struct CVGpsDetailInfo {
    int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    unsigned short _field8;
    unsigned short _field9;
    struct tagVTime _field10;
    int _field11;
};

struct CVMapStringToPtr {
    CDUnknownFunctionPointerType *_field1;
    struct CAssoc **_field2;
    unsigned int _field3;
    int _field4;
    struct CAssoc *_field5;
    int _field6;
    struct CVPlex *_field7;
};

struct CVPlex;

struct CVPoint {
    int x;
    int y;
};

struct CVString {
    CDUnknownFunctionPointerType *_field1;
    unsigned short *_field2;
};

struct DDListNode {
    void *_field1;
    struct DDListNode *_field2;
    struct DDListNode *_field3;
};

struct IVMapbaseInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct JMRadius {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct MOBFJConstBuffer {
    struct MOBFJConstPtrRange _field1;
};

struct MOBFJConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct MOBFJEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MOBFJEncodeState {
    struct MOBFJManagedBuffer _field1;
    struct MOBFJManagedBuffer _field2;
    unsigned long long _field3;
    struct MOBFJFastClassLookup _field4;
    struct MOBFJEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct MOBFJFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct MOBFJHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct MOBFJManagedBuffer {
    struct MOBFJPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MOBFJObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct MOBFJObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct MOBFJParseToken {
    struct MOBFJConstPtrRange _field1;
    unsigned long long _field2;
    struct MOBFJTokenValue _field3;
    struct MOBFJManagedBuffer _field4;
};

struct MOBFJPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct MOBFJTokenCache {
    struct MOBFJTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct MOBFJTokenCacheItem;

struct MOBFJTokenValue {
    struct MOBFJConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_abebb5d1 _field4;
    struct MOBFJTokenCacheItem *_field5;
};

struct MOBFParseState {
    unsigned long long _field1;
    struct MOBFJConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct MOBFJParseToken _field9;
    struct MOBFJObjectStack _field10;
    struct MOBFJTokenCache _field11;
    struct MOBFJObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct POPAnimatorItem;

struct SSState<POP::Vector4<double>> {
    struct Vector4<double> _field1;
    struct Vector4<double> _field2;
};

struct SpringSolver<POP::Vector4<double>> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    struct SSState<POP::Vector4<double>> _field8;
    struct Vector4<double> _field9;
    _Bool _field10;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct Vector4<double> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_abebb5d1 _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct _MOAspectsHookRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _POPAnimationState {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
    id _field4;
    unsigned long long _field5;
    double _field6;
    double _field7;
    double _field8;
    id _field9;
    CDUnknownBlockType _field10;
    CDUnknownBlockType _field11;
    CDUnknownBlockType _field12;
    CDUnknownBlockType _field13;
    id _field14;
    id _field15;
    double _field16;
    long long _field17;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct __CFString;

struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> {
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__prev_;
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__next_;
};

struct _utils {
    CDUnknownFunctionPointerType _field1;
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDict;

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlHashTable;

struct _xmlKind {
    void *_field1;
    int _field2;
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlStd {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlStd *_field7;
    struct _xmlStd *_field8;
    struct _xmlDoc *_field9;
};

struct _xmlValidState;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem>>> {
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct shared_ptr<POPAnimatorItem> {
    struct POPAnimatorItem *_field1;
    struct __shared_weak_count *_field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct ssuregex;

struct tagVTime {
    union {
        struct {
            unsigned long long _field1;
            unsigned int :4;
            unsigned int :5;
            unsigned int :5;
            unsigned int :6;
            unsigned int :6;
            unsigned int :6;
        } _field1;
        unsigned long long _field2;
        unsigned long long _field3;
    } _field1;
};

struct tag_PaoPaoAttribute;

struct tm {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    long long _field10;
    char *_field11;
};

struct uregex;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void *_field1;
    unsigned long long _field2;
} CDStruct_6c7289c3;

typedef struct {
    int used;
    int alloc;
    int sign;
    unsigned long long *dp;
} CDStruct_c40cccb6;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long row;
    long long column;
} CDStruct_ecc15559;

typedef struct CDStruct_183601bc;

typedef struct {
    struct __CFString *string;
    unsigned long long hash;
    long long length;
    unsigned short *uniChar;
} CDStruct_7dfba43f;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_2c43369c northEast;
    CDStruct_2c43369c southWest;
} CDStruct_dafdc2cb;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct CVArray<_baidu_vi::CVBundle, _baidu_vi::CVBundle &> {
    CDUnknownFunctionPointerType *_field1;
    struct CVBundle *_field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
} CVArray_4812fe32;

typedef struct CVArray<_baidu_vi::CVString, _baidu_vi::CVString &> {
    CDUnknownFunctionPointerType *_field1;
    struct CVString *_field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
} CVArray_59d409db;

typedef struct SpringSolver<POP::Vector4<double>> {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    struct SSState<POP::Vector4<double>> _field8;
    struct Vector4<double> _field9;
    _Bool _field10;
} SpringSolver_fe820e75;

typedef struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem>>> {
    struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
} list_670f5810;

typedef struct shared_ptr<POPAnimatorItem> {
    struct POPAnimatorItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_1553c9f8;

#pragma mark Typedef'd Unions

typedef union {
    long long _field1;
    unsigned long long _field2;
    double _field3;
} CDUnion_abebb5d1;
