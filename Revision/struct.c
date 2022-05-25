#include <stdio.h>

typedef struct
{
	int x;
	int y;
}  position;

typedef struct
{
	int length;
	int height;
}  rectangle;

int	main()
{
	position NamePosition = {2, 4};
	printf("X = %d, Y = %d.\n", NamePosition.x, NamePosition.y);
	rectangle NameRectangle = {24, 36};
	printf("Length = %d, Height = %d.\n",NameRectangle.length, NameRectangle.height);
}