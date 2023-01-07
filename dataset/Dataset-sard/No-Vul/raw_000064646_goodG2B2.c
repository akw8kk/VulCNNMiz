static void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    switch(6)
    {
    case 6:
        
        VAR1 = VAR3;
        break;
    default:
        
        FUN3("");
        break;
    }
    {
        int VAR4[100] = {0}; 
        
        memmove(VAR1, VAR4, 100*sizeof(int));
        FUN4(VAR1[0]);
    }
}