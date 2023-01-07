void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(50*sizeof(int));
    FUN2(&VAR1);
}