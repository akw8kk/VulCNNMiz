static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
    }
    {
        int64_t VAR3[100] = {0}; 
        
        memcpy(VAR2, VAR3, 100*sizeof(VAR1));
        FUN4(VAR2[0]);
        free(VAR2);
    }
}