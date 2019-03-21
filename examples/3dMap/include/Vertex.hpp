#ifndef TDM_VERTEX
#define TDM_VERTEX

#include <assimp/vector2.h>
#include <assimp/vector3.h>

namespace tdm
{

struct Vertex
{
  aiVector3D Position;
  aiVector3D Normal;
  aiVector2D TexCoords;
};

} // namespace tdm

#endif // TDM_VERTEX