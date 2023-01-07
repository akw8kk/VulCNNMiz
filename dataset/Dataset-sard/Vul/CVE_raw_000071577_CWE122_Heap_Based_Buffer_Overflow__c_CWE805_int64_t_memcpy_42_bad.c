void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    VAR2 = FUN2(VAR2);
    {
        int64_t VAR3[100] = {0}; 
        
        memcpy(VAR2, VAR3, 100*sizeof(VAR1));
        FUN3(VAR2[0]);
        free(VAR2);
    }
}