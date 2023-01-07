void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(50*sizeof(int));
    {
        int VAR2[100] = {0}; 
        
        memmove(VAR1, VAR2, 100*sizeof(int));
        FUN2(VAR1[0]);
        free(VAR1);
    }
}