
#define OSG_COMPILEFONTSTYLEINST


#include <OSGFontStylePFields.h>

// #include <OSGSFieldTypeScanTypeDef.inl>
// #include <OSGMFieldTypeScanTypeDef.inl>

OSG_BEGIN_NAMESPACE

DataType FieldDataTraits<FontStyleP>::_type("FontStyleP", NULL ); 

OSG_DLLEXPORT_SFIELD_DEF1_ST(FontStyleP, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1_ST(FontStyleP, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE

