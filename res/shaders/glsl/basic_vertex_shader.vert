#version 450
#extension GL_ARB_separate_shader_objects : enable

layout (location = 0) in vec4 pos;

void main() 
{
    gl_Position = pos;
}