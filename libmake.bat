cd .
x86_64-w64-mingw32-gcc -O3 -msse2 -c src/vector2.c -o obj/vector2.obj
ar rcs libs/libvector2.lib obj/vector2.obj

x86_64-w64-mingw32-gcc -O3 -msse2 -c src/vector3.c -o obj/vector3.obj
ar rcs libs/libvector3.lib obj/vector3.obj

x86_64-w64-mingw32-gcc -O3 -msse2 -c src/vector4.c -o obj/vector4.obj
ar rcs libs/libvector4.lib obj/vector4.obj

x86_64-w64-mingw32-gcc -O3 -msse2 -c src/mat4x4.c -o obj/mat4x4.obj
ar rcs libs/libmat4x4.lib obj/mat4x4.obj