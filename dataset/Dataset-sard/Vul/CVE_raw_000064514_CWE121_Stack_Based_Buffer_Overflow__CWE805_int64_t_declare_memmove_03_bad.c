void FUN1()
{
    VAR1 * VAR2;
    int64_t VAR3[50];
    int64_t VAR4[100];
    if(5==5)
    {
        
        VAR2 = VAR3;
    }
    {
        int64_t VAR5[100] = {0}; 
        
        memmove(VAR2, VAR5, 100*sizeof(VAR1));
        FUN2(VAR2[0]);
    }
}