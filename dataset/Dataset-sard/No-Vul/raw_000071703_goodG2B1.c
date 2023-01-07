static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = (int *)malloc(100*sizeof(int));
    }
    {
        int VAR2[100] = {0}; 
        
        memcpy(VAR1, VAR2, 100*sizeof(int));
        FUN4(VAR1[0]);
        free(VAR1);
    }
}