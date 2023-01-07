void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (int *)malloc(50*sizeof(int));
        break;
    }
    {
        int VAR2[100] = {0}; 
        
        memmove(VAR1, VAR2, 100*sizeof(int));
        FUN2(VAR1[0]);
        free(VAR1);
    }
}