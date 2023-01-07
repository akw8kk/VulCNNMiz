static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    if(VAR3==5)
    {
        
        VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
    }
    {
        int64_t VAR4[100] = {0}; 
        
        memcpy(VAR2, VAR4, 100*sizeof(VAR1));
        FUN2(VAR2[0]);
        free(VAR2);
    }
}