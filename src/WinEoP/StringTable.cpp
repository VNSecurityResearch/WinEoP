#include "Utils/EopUtilsType.h"
#pragma section("wineop", read, write)

__declspec(allocate("wineop"))
ENVIRONMENT g_Environment = {
	DATA_TAG, DATA_TAG, 
};

__declspec(allocate("wineop"))
WINAPI_TABLE g_vtable;

#include "StringTable.h"
__declspec(allocate("wineop"))
STRING_TABLE g_stringtable = {

	{ 'S', 'O', 'F', 'T', 'W', 'A', 'R', 'E', '\\', '\\', 'M', 'i', 'c', 'r', 'o', 's', 'o', 'f', 't', '\\', '\\', 'W', 'i', 'n', 'd', 'o', 'w', 's', ' ', 'N', 'T', '\\', '\\', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\0'},
	{ 'C', 'u', 'r', 'r', 'e', 'n', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\0'},
	{ '%', 'c', 'o', 'm', 's', 'p', 'e', 'c', '%', '\0'},
	{ 'u','s','e','r','3','2','.','d','l','l','\0'},

	// -- [Auto generated] BEGIN --
{ 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'L' ^ XOR_KEY, 'i' ^ XOR_KEY, 'b' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'L' ^ XOR_KEY, 'i' ^ XOR_KEY, 'b' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'L' ^ XOR_KEY, 'i' ^ XOR_KEY, 'b' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'A' ^ XOR_KEY, 'd' ^ XOR_KEY, 'd' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'A' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'F' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'I' ^ XOR_KEY, 's' ^ XOR_KEY, 'W' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, '6' ^ XOR_KEY, '4' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'T' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'l' ^ XOR_KEY, 'h' ^ XOR_KEY, 'e' ^ XOR_KEY, 'l' ^ XOR_KEY, 'p' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, 'S' ^ XOR_KEY, 'n' ^ XOR_KEY, 'a' ^ XOR_KEY, 'p' ^ XOR_KEY, 's' ^ XOR_KEY, 'h' ^ XOR_KEY, 'o' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, 'F' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, 'N' ^ XOR_KEY, 'e' ^ XOR_KEY, 'x' ^ XOR_KEY, 't' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 's' ^ XOR_KEY, 'e' ^ XOR_KEY, 'H' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'C' ^ XOR_KEY, 'u' ^ XOR_KEY, 'r' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'I' ^ XOR_KEY, 'd' ^ XOR_KEY, XOR_KEY},
{ 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'p' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'E' ^ XOR_KEY, 'n' ^ XOR_KEY, 'v' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'm' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'S' ^ XOR_KEY, 't' ^ XOR_KEY, 'r' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'g' ^ XOR_KEY, 's' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'V' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 's' ^ XOR_KEY, 'i' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'C' ^ XOR_KEY, 'u' ^ XOR_KEY, 'r' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'b' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'A' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'M' ^ XOR_KEY, 'o' ^ XOR_KEY, 'd' ^ XOR_KEY, 'u' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'H' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'b' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'F' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'F' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'e' ^ XOR_KEY, 'L' ^ XOR_KEY, 'i' ^ XOR_KEY, 'b' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'L' ^ XOR_KEY, 'a' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'E' ^ XOR_KEY, 'r' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'L' ^ XOR_KEY, 'a' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'E' ^ XOR_KEY, 'r' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, XOR_KEY},
{ 'I' ^ XOR_KEY, 's' ^ XOR_KEY, 'B' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'P' ^ XOR_KEY, 't' ^ XOR_KEY, 'r' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'C' ^ XOR_KEY, 'u' ^ XOR_KEY, 'r' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'T' ^ XOR_KEY, 'h' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'I' ^ XOR_KEY, 'd' ^ XOR_KEY, XOR_KEY},
{ 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 'd' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'c' ^ XOR_KEY, 'h' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'D' ^ XOR_KEY, 'e' ^ XOR_KEY, 'v' ^ XOR_KEY, 'i' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 'I' ^ XOR_KEY, 'o' ^ XOR_KEY, 'C' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'l' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'I' ^ XOR_KEY, 'o' ^ XOR_KEY, 'C' ^ XOR_KEY, 'o' ^ XOR_KEY, 'm' ^ XOR_KEY, 'p' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'i' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'O' ^ XOR_KEY, 'p' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'A' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, XOR_KEY},
{ 'W' ^ XOR_KEY, 'r' ^ XOR_KEY, 'i' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'm' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'm' ^ XOR_KEY, 'o' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'T' ^ XOR_KEY, 'h' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, XOR_KEY},
{ 'W' ^ XOR_KEY, 'a' ^ XOR_KEY, 'i' ^ XOR_KEY, 't' ^ XOR_KEY, 'F' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'S' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'g' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'O' ^ XOR_KEY, 'b' ^ XOR_KEY, 'j' ^ XOR_KEY, 'e' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'T' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'm' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'T' ^ XOR_KEY, 'h' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'F' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'e' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'e' ^ XOR_KEY, 'p' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'C' ^ XOR_KEY, 'o' ^ XOR_KEY, 'm' ^ XOR_KEY, 'p' ^ XOR_KEY, 'u' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'N' ^ XOR_KEY, 'a' ^ XOR_KEY, 'm' ^ XOR_KEY, 'e' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'A' ^ XOR_KEY, 'd' ^ XOR_KEY, 'v' ^ XOR_KEY, 'a' ^ XOR_KEY, 'p' ^ XOR_KEY, 'i' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, XOR_KEY},
{ 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'O' ^ XOR_KEY, 'p' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'K' ^ XOR_KEY, 'e' ^ XOR_KEY, 'y' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'V' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 's' ^ XOR_KEY, 'e' ^ XOR_KEY, 'K' ^ XOR_KEY, 'e' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'O' ^ XOR_KEY, 'p' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'T' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, XOR_KEY},
{ 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, 'u' ^ XOR_KEY, 'p' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'i' ^ XOR_KEY, 'v' ^ XOR_KEY, 'i' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 'V' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'A' ^ XOR_KEY, 'd' ^ XOR_KEY, 'j' ^ XOR_KEY, 'u' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'T' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'i' ^ XOR_KEY, 'v' ^ XOR_KEY, 'i' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, XOR_KEY},
{ 'u' ^ XOR_KEY, 's' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, '.' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, XOR_KEY},
{ 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'i' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'a' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'i' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'a' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'U' ^ XOR_KEY, 'n' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'i' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'a' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'D' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'y' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, 's' ^ XOR_KEY, 'H' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'F' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'g' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'u' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, XOR_KEY},
{ 'T' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'c' ^ XOR_KEY, 'k' ^ XOR_KEY, 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 'p' ^ XOR_KEY, 'u' ^ XOR_KEY, 'p' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, XOR_KEY},
{ 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'U' ^ XOR_KEY, 'n' ^ XOR_KEY, 'h' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, 's' ^ XOR_KEY, 'H' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, XOR_KEY},
{ 'D' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'y' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'g' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'N' ^ XOR_KEY, 'e' ^ XOR_KEY, 'x' ^ XOR_KEY, 't' ^ XOR_KEY, 'H' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 'p' ^ XOR_KEY, 'u' ^ XOR_KEY, 'p' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, XOR_KEY},
{ 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 's' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, 'I' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'm' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'E' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, XOR_KEY},
{ 'D' ^ XOR_KEY, 'e' ^ XOR_KEY, 'f' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'o' ^ XOR_KEY, 'w' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'I' ^ XOR_KEY, 'c' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'a' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'g' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'E' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, 'm' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'p' ^ XOR_KEY, 's' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'm' ^ XOR_KEY, 'o' ^ XOR_KEY, 'v' ^ XOR_KEY, 'e' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'p' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'w' ^ XOR_KEY, 's' ^ XOR_KEY, 'p' ^ XOR_KEY, 'r' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'f' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'p' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'A' ^ XOR_KEY, 'c' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'T' ^ XOR_KEY, 'a' ^ XOR_KEY, 'b' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'V' ^ XOR_KEY, 'k' ^ XOR_KEY, 'K' ^ XOR_KEY, 'e' ^ XOR_KEY, 'y' ^ XOR_KEY, 'S' ^ XOR_KEY, 'c' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 'p' ^ XOR_KEY, 'u' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'F' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'u' ^ XOR_KEY, 's' ^ XOR_KEY, XOR_KEY},
{ 'A' ^ XOR_KEY, 'p' ^ XOR_KEY, 'p' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'W' ^ XOR_KEY, 'i' ^ XOR_KEY, 'n' ^ XOR_KEY, 'E' ^ XOR_KEY, 'v' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'H' ^ XOR_KEY, 'o' ^ XOR_KEY, 'o' ^ XOR_KEY, 'k' ^ XOR_KEY, XOR_KEY},
{ 'T' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'c' ^ XOR_KEY, 'k' ^ XOR_KEY, 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 'p' ^ XOR_KEY, 'u' ^ XOR_KEY, 'p' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, XOR_KEY},
{ 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'D' ^ XOR_KEY, 'i' ^ XOR_KEY, 's' ^ XOR_KEY, 'p' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'c' ^ XOR_KEY, 'h' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, XOR_KEY},
{ 'T' ^ XOR_KEY, 'r' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 's' ^ XOR_KEY, 'l' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'L' ^ XOR_KEY, 'o' ^ XOR_KEY, 'a' ^ XOR_KEY, 'd' ^ XOR_KEY, 'C' ^ XOR_KEY, 'u' ^ XOR_KEY, 'r' ^ XOR_KEY, 's' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'P' ^ XOR_KEY, 'o' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'i' ^ XOR_KEY, 't' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 's' ^ XOR_KEY, 'a' ^ XOR_KEY, 'g' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'E' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, 'm' ^ XOR_KEY, 'D' ^ XOR_KEY, 'i' ^ XOR_KEY, 's' ^ XOR_KEY, 'p' ^ XOR_KEY, 'l' ^ XOR_KEY, 'a' ^ XOR_KEY, 'y' ^ XOR_KEY, 'D' ^ XOR_KEY, 'e' ^ XOR_KEY, 'v' ^ XOR_KEY, 'i' ^ XOR_KEY, 'c' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'W' ^ XOR_KEY, 's' ^ XOR_KEY, '2' ^ XOR_KEY, '_' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, '.' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, XOR_KEY},
{ 'W' ^ XOR_KEY, 'S' ^ XOR_KEY, 'A' ^ XOR_KEY, 'S' ^ XOR_KEY, 't' ^ XOR_KEY, 'a' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'p' ^ XOR_KEY, XOR_KEY},
{ 'W' ^ XOR_KEY, 'S' ^ XOR_KEY, 'A' ^ XOR_KEY, 'C' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 'n' ^ XOR_KEY, 'u' ^ XOR_KEY, 'p' ^ XOR_KEY, XOR_KEY},
{ 's' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'c' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 's' ^ XOR_KEY, 'e' ^ XOR_KEY, 's' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 'c' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'n' ^ XOR_KEY, 'e' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, XOR_KEY},
{ 's' ^ XOR_KEY, 'h' ^ XOR_KEY, 'e' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, '.' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, XOR_KEY},
{ 'S' ^ XOR_KEY, 'h' ^ XOR_KEY, 'e' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'E' ^ XOR_KEY, 'x' ^ XOR_KEY, 'e' ^ XOR_KEY, 'c' ^ XOR_KEY, 'u' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'A' ^ XOR_KEY, XOR_KEY},
{ 'G' ^ XOR_KEY, 'd' ^ XOR_KEY, 'i' ^ XOR_KEY, '3' ^ XOR_KEY, '2' ^ XOR_KEY, '.' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, XOR_KEY},
{ 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'R' ^ XOR_KEY, 'o' ^ XOR_KEY, 'u' ^ XOR_KEY, 'n' ^ XOR_KEY, 'd' ^ XOR_KEY, 'R' ^ XOR_KEY, 'e' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, 'R' ^ XOR_KEY, 'g' ^ XOR_KEY, 'n' ^ XOR_KEY, XOR_KEY},
{ 'N' ^ XOR_KEY, 't' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, '.' ^ XOR_KEY, 'd' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, XOR_KEY},
{ 'Z' ^ XOR_KEY, 'w' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'S' ^ XOR_KEY, 'y' ^ XOR_KEY, 's' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'm' ^ XOR_KEY, 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 'f' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'm' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'i' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, XOR_KEY},
{ 'Z' ^ XOR_KEY, 'w' ^ XOR_KEY, 'A' ^ XOR_KEY, 'l' ^ XOR_KEY, 'l' ^ XOR_KEY, 'o' ^ XOR_KEY, 'c' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'V' ^ XOR_KEY, 'i' ^ XOR_KEY, 'r' ^ XOR_KEY, 't' ^ XOR_KEY, 'u' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'M' ^ XOR_KEY, 'e' ^ XOR_KEY, 'm' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'N' ^ XOR_KEY, 't' ^ XOR_KEY, 'C' ^ XOR_KEY, 'r' ^ XOR_KEY, 'e' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'W' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'F' ^ XOR_KEY, 'a' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'N' ^ XOR_KEY, 't' ^ XOR_KEY, 'S' ^ XOR_KEY, 'e' ^ XOR_KEY, 't' ^ XOR_KEY, 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 'f' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'm' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'i' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'W' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'F' ^ XOR_KEY, 'a' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'N' ^ XOR_KEY, 't' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 'f' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'm' ^ XOR_KEY, 'a' ^ XOR_KEY, 't' ^ XOR_KEY, 'i' ^ XOR_KEY, 'o' ^ XOR_KEY, 'n' ^ XOR_KEY, 'W' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'k' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'F' ^ XOR_KEY, 'a' ^ XOR_KEY, 'c' ^ XOR_KEY, 't' ^ XOR_KEY, 'o' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, XOR_KEY},
{ 'N' ^ XOR_KEY, 't' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'E' ^ XOR_KEY, 'a' ^ XOR_KEY, 'F' ^ XOR_KEY, 'i' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
{ 'N' ^ XOR_KEY, 't' ^ XOR_KEY, 'Q' ^ XOR_KEY, 'u' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'y' ^ XOR_KEY, 'I' ^ XOR_KEY, 'n' ^ XOR_KEY, 't' ^ XOR_KEY, 'e' ^ XOR_KEY, 'r' ^ XOR_KEY, 'v' ^ XOR_KEY, 'a' ^ XOR_KEY, 'l' ^ XOR_KEY, 'P' ^ XOR_KEY, 'r' ^ XOR_KEY, 'o' ^ XOR_KEY, 'f' ^ XOR_KEY, 'i' ^ XOR_KEY, 'l' ^ XOR_KEY, 'e' ^ XOR_KEY, XOR_KEY},
	// -- [Auto generated] END --
};