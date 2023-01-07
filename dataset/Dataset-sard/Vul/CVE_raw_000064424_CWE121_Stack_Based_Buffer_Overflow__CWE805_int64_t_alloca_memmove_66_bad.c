void FUN1()
{
    VAR1 * VAR2;
    VAR1 * VAR3[5];
    VAR1 * VAR4 = (VAR1 *)FUN2(50*sizeof(VAR1));
    VAR1 * VAR5 = (VAR1 *)FUN2(100*sizeof(VAR1));
    
    VAR2 = VAR4;
    
    VAR3[2] = VAR2;
    FUN3(VAR3);
}