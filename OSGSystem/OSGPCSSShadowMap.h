#ifndef _OSGPCSSSHADOWMAP_H_
#define _OSGPCSSSHADOWMAP_H_
#ifdef __sgi
#pragma once
#endif

#include <vector>
#include <OSGConfig.h>
#include <OSGAction.h>
#include <OSGRenderActionBase.h>
#include <OSGSpotLight.h>
#include <OSGDirectionalLight.h>
#include <OSGPerspectiveCamera.h>
#include <OSGMatrixCamera.h>
#include <OSGTransform.h>
#include <OSGTextureChunk.h>
#include <OSGPassiveBackground.h>
#include <OSGSolidBackground.h>
#include <OSGDynamicVolume.h>
#include <OSGChunkMaterial.h>
#include <OSGMaterialChunk.h>
#include <OSGSHLChunk.h>
#include <OSGForeground.h>
#include <OSGPolygonForeground.h>
#include <OSGGrabForeground.h>
#include <OSGTextureGrabForeground.h>
#include <OSGFileGrabForeground.h>
#include <OSGImageForeground.h>
#include <OSGTexGenChunk.h>
#include <OSGTextureTransformChunk.h>
#include <OSGPolygonChunk.h>
#include <OSGBlendChunk.h>
#include <OSGTileCameraDecorator.h>
#include <OSGSimpleMaterial.h>
#include <OSGDepthChunk.h>

#include "OSGTreeRenderer.h"

OSG_BEGIN_NAMESPACE

class ShadowViewport;
class TreeRenderer;

class OSG_SYSTEMLIB_DLLMAPPING PCSSShadowMap : public TreeRenderer {
 public:
  PCSSShadowMap(ShadowViewport* source);
  ~PCSSShadowMap(void);
  virtual void render(RenderActionBase* action);

 private:
  void initTextures(Window* win);
  void createShadowMaps(RenderActionBase* action);
  void createColorMap(RenderActionBase* action);
  void createColorMapFBO(RenderActionBase* action);
  void drawCombineMap(RenderActionBase* action);
  void createShadowFactorMap(RenderActionBase* action, UInt32 num);
  void createShadowFactorMapFBO(RenderActionBase* action, UInt32 num);
  void createShadowMapsFBO(RenderActionBase* action);
  bool initFBO(Window* win);
  void reInit(Window* win);
  bool checkFrameBufferStatus(Window* win);

  TileCameraDecoratorPtr _tiledeco;
  TextureChunkPtr        _colorMap;
  TextureChunkPtr        _shadowFactorMap;
  ImagePtr               _colorMapImage;
  ImagePtr               _shadowFactorMapImage;
  ChunkMaterialPtr       _shadowCmat;
  SHLChunkPtr            _shadowSHL;
  SHLChunkPtr            _combineSHL;
  DepthChunkPtr          _combineDepth;
  ChunkMaterialPtr       _combineCmat;
  PolygonForegroundPtr   _pf;
  Int32                  _firstRun;
  UInt32                 _width;
  UInt32                 _height;
  UInt32                 _widthHeightPOT;
  GLuint                 _fb;
  GLuint                 _fb2;
  GLuint                 _rb_depth;
  bool                   _initTexturesDone;
};

OSG_END_NAMESPACE

#endif /* _OSGPCSSSHADOWMAP_H_ */
