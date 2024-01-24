#include<stdio.h>
#include<stdlib.h>

struct array 
{
    int A[20];
    int size;
    int length;
};

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void display(struct array arr)
{
    int i;
    printf("elements are \n");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}

void append(struct array *arr,int x)
{
    if(arr->length<arr->size)
     arr->A[arr->length++]=x;
}

void insert(strcut array arr,int index,int x)
{
    int i;
    if(index>=0 && index<arr->length)
    {
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
    
}

int Delete(struct Array *arr,int index)
{
int x=0;
int i;
if(index>=0 && index<arr->length)
 {
   x=arr->A[index];
   for(i=index;i<arr->length-1;i++)
   arr->A[i]=arr->A[i+1];
   arr->length--;
   return x;
 }
return 0;
}

int LinearSearch(struct Array *arr,int key)
{
 int i;
 for(i=0;i<arr->length;i++)
 {
 if(key==arr->A[i])
 {
 swap(&arr->A[i],&arr->A[0]);
 return i;
 }
 }
 return -1;
}
int BinarySearch(struct Array arr,int key)
{
 int l,mid,h;
 l=0;
 h=arr.length-1;

 while(l<=h)
 {
 mid=(l+h)/2;
 if(key==arr.A[mid])
 return mid;
 else if(key<arr.A[mid])
 h=mid-1;
 else
 l=mid+1;
 }
 return -1;
}
int RBinSearch(int a[],int l,int h,int key)
{
 int mid;

 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==a[mid])
 return mid;
 else if(key<a[mid])
 return RBinSearch(a,l,mid-1,key);
 else
 return RBinSearch(a,mid+1,h,key);
 }
 return -1;
}
int Get(struct Array arr,int index)
{
 if(index>=0 && index<arr.length)
 return arr.A[index];
 return -1;
}
void Set(struct Array *arr,int index,int x)
{
 if(index>=0 && index<arr->length)
 arr->A[index]=x;
}
int Max(struct Array arr)
{
 int max=arr.A[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.A[i]>max)
 max=arr.A[i];
 }
 return max;
}
int Min(struct Array arr)
{
 int min=arr.A[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.A[i]<min)
 min=arr.A[i];
 }
 return min;
}
int Sum(struct Array arr)
{
 int s=0;
 int i;
 for(i=0;i<arr.length;i++)
 s+=arr.A[i];

 return s;
}
float Avg(struct Array arr)
{
 return (float)Sum(arr)/arr.length;
}

void reverse(struct array *arr)
{
    int i,j,*B;
    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
     B[j]=arr->A[i];
    for(i=0;i<arr->length;i++)
     arr->A[i]=B[i];
}

void reverse2(struct array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

void insert_sort(struct array *arr,int n)
{
    int i;
    i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while(i>=0 && arr->A[i]>n)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=n;
    arr->length++;
}

int checksort(struct array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return 1;
}

void REarrange(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    { 
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;
    if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}

struct array *merge(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else 
        arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
     arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
     arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}


struct array *Union(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
        arr3->A[k++]=arr2->A[j++];
        else 
        {
         arr3->A[k++]=arr1->A[i++];
         j++;
        }
    }
    for(;i<arr1->length;i++)
     arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
     arr3->A[k++]=arr2->A[j];
    
    arr3->length=k;
    arr3->size=10;
    return arr3;
}


struct array *Intersection(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        i++;
        else if(arr2->A[j]<arr1->A[i])
        j++;
        else if(arr1->A[i]==arr2->A[j])
        {
         arr3->A[k++]=arr1->A[i++];
         j++;
        }
    }
    
    arr3->length=k;
    arr3->size=10;
    return arr3;
}


struct array *Difference(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
        j++;
        else if(arr1->A[i]==arr2->A[j])
        {
         i++;
         j++;
        }
    }
    for(;i<arr1->length;i++)
     arr3->A[k++]=arr1->A[i];
    
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

// int main()
// {
//     struct array arr;
//     int i,n;
//     printf("enter size of an array\n");
//     scanf("%d",&arr.size);
//     arr.A=(int *)malloc(arr.size*sizeof(int));
//     arr.length=0;

//     printf("enter the number of numbers\n");
//     scanf("%d",&n);

//     printf("enter all the elements\n");
//     for(i=0;i<n;i++)
//     scanf("%d",&arr.A[i]);
//     arr.length=n;
//     display(arr);
//     return 0;
// }

int main()
{
    struct array arr1={{2,6,10,15,25},10,5};
    struct array arr2={{3,6,7,15,20},10,5};
    struct array *arr3;
    // reverse2(&arr);
    // insert(4,10);
    // insert_sort(&arr,1);
    // printf("%d\n",checksort(arr));
    // REarrange(&arr);
    // arr3=merge(&arr1,&arr2);
    // arr3=Union(&arr1,&arr2);
    // arr3=Intersection(&arr1,&arr2);
    arr3=Difference(&arr1,&arr2);
    display(*arr3);
    return 0;
}