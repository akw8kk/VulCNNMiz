static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(0)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (int *)malloc(100*sizeof(int));
    }
    {
        int VAR2[100] = {0}; 
        
        memmove(VAR1, VAR2, 100*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}