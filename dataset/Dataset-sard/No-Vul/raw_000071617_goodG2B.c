static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    goto VAR3;
VAR3:
    
    VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
    {
        int64_t VAR3[100] = {0}; 
        
        memmove(VAR2, VAR3, 100*sizeof(VAR1));
        FUN2(VAR2[0]);
        free(VAR2);
    }
}