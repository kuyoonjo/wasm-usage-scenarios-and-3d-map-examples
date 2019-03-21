#ifndef TDM_MESH
#define TDM_MESH

#include <vector>
#include "Vertex.hpp"
#include "Texture.hpp"

namespace tdm
{

class Mesh
{
public:
  /*  Mesh Data  */
  std::vector<Vertex> vertices;
  std::vector<u_int32_t> indices;
  std::vector<Texture> textures;
  /*  Functions  */
  Mesh(std::vector<Vertex> vertices, std::vector<u_int32_t> indices, std::vector<Texture> textures);
  void Draw(Shader shader);

private:
  /*  Render data  */
  u_int32_t VAO, VBO, EBO;
  /*  Functions    */
  void setupMesh();
};

} // namespace tdm

#endif // TDM_MESH