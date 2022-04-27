Position BinarySearch( List L, ElementType X )
{
int min=1;
int max=L->Last;
while(min<=max)
{
	int mid=(max+min)/2;
	mid=(max+min)/2;
	if(X<L->Data[mid])
	{
		max=mid-1;
	}
	else if(X>L->Data[mid])
	{
		min=mid+1;
	}
	else
	{
	return mid;
    }
}
return NotFound;
}

