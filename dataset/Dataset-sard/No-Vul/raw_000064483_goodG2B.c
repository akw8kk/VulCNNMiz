static void FUN1()
{
    VAR1 * VAR2;
    int64_t VAR3[50];
    int64_t VAR4[100];
    if(FUN2())
    {
        
        VAR2 = VAR4;
    }
    else
    {
        
        VAR2 = VAR4;
    }
    {
        int64_t VAR5[100] = {0}; 
        
        memcpy(VAR2, VAR5, 100*sizeof(VAR1));
        FUN3(VAR2[0]);
    }
}