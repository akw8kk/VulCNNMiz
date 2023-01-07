static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (int *)malloc(10*sizeof(int));
    }
    {
        int VAR3[10] = {0};
        
        memmove(VAR1, VAR3, 10*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}