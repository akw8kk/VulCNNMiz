void FUN1()
{
    VAR1 * VAR2;
    int64_t VAR3[50];
    int64_t VAR4[100];
    switch(6)
    {
    case 6:
        
        VAR2 = VAR3;
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        int64_t VAR5[100] = {0}; 
        
        memcpy(VAR2, VAR5, 100*sizeof(VAR1));
        FUN3(VAR2[0]);
    }
}