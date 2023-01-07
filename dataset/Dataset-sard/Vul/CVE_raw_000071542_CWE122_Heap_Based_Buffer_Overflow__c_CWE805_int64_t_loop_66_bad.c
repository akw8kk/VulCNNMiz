void FUN1()
{
    VAR1 * VAR2;
    VAR1 * VAR3[5];
    VAR2 = NULL;
    
    VAR2 = (VAR1 *)malloc(50*sizeof(VAR1));
    
    VAR3[2] = VAR2;
    FUN2(VAR3);
}