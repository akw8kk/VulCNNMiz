static void FUN1()
{
    VAR1 * VAR2;
    VAR1 * VAR3 = (VAR1 *)FUN2(50*sizeof(VAR1));
    VAR1 * VAR4 = (VAR1 *)FUN2(100*sizeof(VAR1));
    switch(5)
    {
    case 6:
        
        FUN3("");
        break;
    default:
        
        VAR2 = VAR4;
        break;
    }
    {
        int64_t VAR5[100] = {0}; 
        
        memcpy(VAR2, VAR5, 100*sizeof(VAR1));
        FUN4(VAR2[0]);
    }
}