void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (int *)malloc(50*sizeof(int));
    }
    else
    {
        
        VAR1 = (int *)malloc(100*sizeof(int));
    }
    {
        int VAR2[100] = {0}; 
        
        memcpy(VAR1, VAR2, 100*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}