#ifndef _selection_h_
#define _selection_h_

void scambia(double *a, double *b)
{double c;
c=*a;
*a=*b;
*b=c;
}

void selectionsort(double *vett, int n)
{int i,j;
for(i=1;i<n-1;i++)
{for(j=i+1;j<n;j++)
   {if(vett[i]>vett[j])
	scambia(&vett[i],&vett[j]);
}
}
}






#endif
