#include "bevgrafmath2017.h"

int main(int argc, char** argv)
{
	printf("======================================================\n");
	printf("Általános tesztek\n");
	printf("======================================================\n");
	printMathObject(pi(), "PI = ");
	printMathObject(two_pi(), "2 * PI = ");
	printMathObject(half_pi(), "PI / 2 = ");
	printMathObject(degToRad(0.0f), "0 deg to rad = ");
	printMathObject(degToRad(0.0f), "0 deg to rad = ");
	printMathObject(degToRad(180.0f), "90 deg to rad = ");
	printMathObject(radToDeg(0.0f), "0 rad to deg = ");
	printMathObject(radToDeg(pi()), "PI to deg = ");

	vec2 v21 = {}, v22 = { 0.0f, 1.0f }, v23 = { 1.0f, 2.0f };
	printf("======================================================\n");
	printf("vec2 tesztek\n");
	printf("======================================================\n");
	printMathObject(v21, "v21 = ");
	printMathObject(v22, "v22 = ");
	printMathObject(v23, "v23 = ");
	printMathObject(v21 == v21, "v21 == v21 = ");
	printMathObject(v21 == v22, "v21 == v22 = ");
	printMathObject(v21 != v21, "v21 != v21 = ");
	printMathObject(v21 != v22, "v21 != v22 = ");
	printMathObject(v22 + v23, "v22 + v23 = ");
	printMathObject(v22 - v23, "v22 - v23 = ");
	printMathObject(v23 + 10, "v23 + 10 = ");
	printMathObject(v23 - 10, "v23 - 10 = ");
	printMathObject(v23 * 10, "v23 * 10 = ");
	printMathObject(v23 / 10, "v23 / 10 = ");
	printMathObject(dot(v21, v21), "<v21, v21> = ");
	printMathObject(dot(v21, v22), "<v21, v22> = ");
	printMathObject(length(v21), "|v21| = ");
	printMathObject(length(v22), "|v22| = ");
	printMathObject(dist(v21, v21), "dist(v21, v21) = ");
	printMathObject(dist(v21, v22), "dist(v21, v22) = ");
	printMathObject(normalize(v21), "normalize(v21) = ");
	printMathObject(normalize(v22), "normalize(v22) = ");
	printf("\n");

	vec3 v31 = {}, v32 = { 0.0f, 1.0f, 2.0f }, v33 = { v23, 3.0f }, v34 = { 1.0f, 0.0f, 0.0f }, v35 = { 0.0f, 1.0f, 0.0f }, v36 = { 0.0f, -2.0f, -4.0f };
	printf("======================================================\n");
	printf("vec3 tesztek\n");
	printf("======================================================\n");
	printMathObject(v31, "v31 = ");
	printMathObject(v32, "v32 = ");
	printMathObject(v33, "v33 = ");
	printMathObject(v34, "v34 = ");
	printMathObject(v35, "v35 = ");
	printMathObject(v36, "v36 = ");
	printMathObject(v31 == v31, "v31 == v31 = ");
	printMathObject(v31 == v32, "v31 == v32 = ");
	printMathObject(v31 != v31, "v31 != v31 = ");
	printMathObject(v31 != v32, "v31 != v32 = ");
	printMathObject(v32 + v33, "v32 + v33 = ");
	printMathObject(v32 - v33, "v32 - v33 = ");
	printMathObject(v33 + 10, "v33 + 10 = ");
	printMathObject(v33 - 10, "v33 - 10 = ");
	printMathObject(v33 * 10, "v33 * 10 = ");
	printMathObject(v33 / 10, "v33 / 10 = ");
	printMathObject(dot(v31, v31), "<v31, v31> = ");
	printMathObject(dot(v31, v32), "<v31, v32> = ");
	printMathObject(cross(v34, v35), "v34 x v35 = ");
	printMathObject(cross(v32, v36), "v32 x v36 = ");
	printMathObject(length(v31), "|v31| = ");
	printMathObject(length(v32), "|v32| = ");
	printMathObject(dist(v31, v31), "dist(v31, v31) = ");
	printMathObject(dist(v31, v32), "dist(v31, v32) = ");
	printMathObject(normalize(v31), "normalize(v31) = ");
	printMathObject(normalize(v32), "normalize(v32) = ");
	printf("\n");

	vec4 v41 = {}, v42 = { 0.0f, 1.0f, 2.0f, 3.0f }, v43 = { v23, 3.0f, 4.0f }, v44 = { v33, 4.0f };
	printf("======================================================\n");
	printf("vec4 tesztek\n");
	printf("======================================================\n");
	printMathObject(v41, "v41 = ");
	printMathObject(v42, "v42 = ");
	printMathObject(v43, "v43 = ");
	printMathObject(v44, "v44 = ");
	printMathObject(v41 == v41, "v41 == v41 = ");
	printMathObject(v41 == v42, "v41 == v42 = ");
	printMathObject(v41 != v41, "v41 != v41 = ");
	printMathObject(v41 != v42, "v41 != v42 = ");
	printMathObject(v42 + v43, "v42 + v43 = ");
	printMathObject(v42 - v43, "v42 - v43 = ");
	printMathObject(v43 + 10, "v43 + 10 = ");
	printMathObject(v43 - 10, "v43 - 10 = ");
	printMathObject(v43 * 10, "v43 * 10 = ");
	printMathObject(v43 / 10, "v43 / 10 = ");
	printMathObject(dot(v41, v41), "<v41, v41> = ");
	printMathObject(dot(v41, v42), "<v41, v42> = ");
	printMathObject(length(v41), "|v41| = ");
	printMathObject(length(v42), "|v42| = ");
	printMathObject(dist(v41, v41), "dist(v41, v41) = ");
	printMathObject(dist(v41, v42), "dist(v41, v42) = ");
	printMathObject(normalize(v41), "normalize(v41) = ");
	printMathObject(normalize(v42), "normalize(v42) = ");
	printf("\n");

	mat3 m31 = {}, m32 = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f }, m33 = { v32, v32, v32 }, m34 = { 1.0f, 0.0f, 0.0f, 0.0, 2.0f, 0.0f, 0.0f, 0.0f, 3.0f };
	printf("======================================================\n");
	printf("mat3 tesztek\n");
	printf("======================================================\n");
	printMathObject(m31, "m31 = ");
	printMathObject(m32, "m32 = ");
	printMathObject(m33, "m33 = ");
	printMathObject(m34, "m34 = ");
	printMathObject(m31 == m31, "m31 == m31 = ");
	printMathObject(m31 == m32, "m31 == m32 = ");
	printMathObject(m31 != m31, "m31 != m31 = ");
	printMathObject(m31 != m32, "m31 != m32 = ");
	printMathObject(m32 + m33, "m32 + m33 = ");
	printMathObject(m32 - m33, "m32 - m33 = ");
	printMathObject(m32 * m33, "m32 * m33 = ");
	printMathObject(m31 * v32, "m31 * v32 = ");
	printMathObject(m32 * v32, "m32 * v32 = ");
	printMathObject(m32 + 10, "m32 + 10 = ");
	printMathObject(m32 - 10, "m32 - 10 = ");
	printMathObject(m32 * 10, "m32 * 10 = ");
	printMathObject(m32 / 10, "m32 / 10 = ");
	printMathObject(transpose(m31), "m31' = ");
	printMathObject(transpose(m32), "m32' = ");
	printMathObject(transpose(m33), "m33' = ");
	printMathObject(transpose(m34), "m34' = ");
	printMathObject(determinant(m31), "|m31| = ");
	printMathObject(determinant(m32), "|m32| = ");
	printMathObject(determinant(m33), "|m33| = ");
	printMathObject(determinant(m34), "|m34| = ");
	printMathObject(inverse(m31), "m31 ^ -1 = ");
	printMathObject(inverse(m32), "m32 ^ -1 = ");
	printMathObject(inverse(m33), "m33 ^ -1 = ");
	printMathObject(inverse(m34), "m34 ^ -1 = ");
	printf("\n");

	mat4 m41 = {}, m42 = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f }, m43 = { v42, v42, v42, v42 }, m44 = { m33 }, m45 = { 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4.0f };
	printf("======================================================\n");
	printf("mat4 tesztek\n");
	printf("======================================================\n");
	printMathObject(m41, "m41 = ");
	printMathObject(m42, "m42 = ");
	printMathObject(m43, "m43 = ");
	printMathObject(m44, "m44 = ");
	printMathObject(m45, "m45 = ");
	printMathObject(m41 == m41, "m41 == m41 = ");
	printMathObject(m41 == m42, "m41 == m42 = ");
	printMathObject(m41 != m41, "m41 != m41 = ");
	printMathObject(m41 != m42, "m41 != m42 = ");
	printMathObject(m42 + m43, "m42 + m43 = ");
	printMathObject(m42 - m43, "m42 - m43 = ");
	printMathObject(m42 * m43, "m42 * m43 = ");
	printMathObject(m41 * v42, "m41 * v42 = ");
	printMathObject(m42 * v42, "m42 * v42 = ");
	printMathObject(m42 + 10, "m42 + 10 = ");
	printMathObject(m42 - 10, "m42 - 10 = ");
	printMathObject(m42 * 10, "m42 * 10 = ");
	printMathObject(m42 / 10, "m42 / 10 = ");
	printMathObject(transpose(m41), "m41' = ");
	printMathObject(transpose(m42), "m42' = ");
	printMathObject(transpose(m43), "m43' = ");
	printMathObject(transpose(m44), "m44' = ");
	printMathObject(determinant(m41), "|m41| = ");
	printMathObject(determinant(m42), "|m42| = ");
	printMathObject(determinant(m43), "|m43| = ");
	printMathObject(determinant(m44), "|m44| = ");
	printMathObject(determinant(m45), "|m45| = ");
	printMathObject(inverse(m41), "m41 ^ -1 = ");
	printMathObject(inverse(m42), "m42 ^ -1 = ");
	printMathObject(inverse(m43), "m43 ^ -1 = ");
	printMathObject(inverse(m44), "m44 ^ -1 = ");
	printMathObject(inverse(m45), "m45 ^ -1 = ");
	printf("\n");

	printf("======================================================\n");
	printf("transzformacio tesztek\n");
	printf("======================================================\n");
	printMathObject(translate(vec2(0.0f, 0.0f)), "T(0, 0) = ");
	printMathObject(translate(vec2(1.0f, 2.0f)), "T(1, 2) = ");
	printMathObject(translate(vec3(0.0f, 0.0f, 0.0f)), "T(0, 0, 0) = ");
	printMathObject(translate(vec3(1.0f, 2.0f, 3.0f)), "T(1, 2, 3) = ");
	printMathObject(rotate(0.0f), "R(0°) = ");
	printMathObject(rotate(degToRad(90.0f)), "R(90°) = ");
	printMathObject(rotateX(0.0f), "Rx(0°) = ");
	printMathObject(rotateX(degToRad(90.0f)), "Rx(90°) = ");
	printMathObject(rotateY(0.0f), "Ry(0°) = ");
	printMathObject(rotateY(degToRad(90.0f)), "Ry(90°) = ");
	printMathObject(rotateZ(0.0f), "Rz(0°) = ");
	printMathObject(rotateZ(degToRad(90.0f)), "Rz(90°) = ");
	printMathObject(scale(vec2(0.0f, 0.0f)), "S(0, 0) = ");
	printMathObject(scale(vec2(1.0f, 1.0f)), "S(1, 1) = ");
	printMathObject(scale(vec2(1.0f, 2.0f)), "S(1, 2) = ");
	printMathObject(scale(vec3(0.0f, 0.0f, 0.0f)), "S(0, 0, 0) = ");
	printMathObject(scale(vec3(1.0f, 1.0f, 1.0f)), "S(1, 1, 1) = ");
	printMathObject(scale(vec3(1.0f, 2.0f, 3.0f)), "S(1, 2, 3) = ");
	printMathObject(windowToViewport2(vec2(1.0f, 1.0f), vec2(2.0f, 1.0f), vec2(0.0f, 0.0f), vec2(10.0f, 10.0f)), "WtV2 = ");
	printMathObject(windowToViewport3(vec2(1.0f, 1.0f), vec2(2.0f, 1.0f), vec2(0.0f, 0.0f), vec2(10.0f, 10.0f)), "WtV3 = ");
	printMathObject(ortho(), "O = ");
	printMathObject(perspective(2.0f), "P(2) = ");
	printMathObject(parallel(vec3(0.5f, 0.0f, 0.5f)), "Pp(0.5, 0, 0.5) = ");
	printMathObject(parallel(vec3(0.0f, 0.0f, 1.0f)), "Pp(0, 0, 1) = ");
	printMathObject(axonometry(vec2(1.0f, 0.0f), vec2(0.0f, 1.0f), vec2(-1.0f, -1.0f)), "A((1, 0), (0, 1), (-1, -1)) = ");
	printMathObject(cavalier(degToRad(45.0f), 0.5f), "C(45, 0.5) = ");

	return 0;
}