void FUN1()
{
    VAR1 * VAR2;
    
    void (*VAR3) (VAR1 *) = VAR4;
    VAR2 = NULL;
    
    VAR2 = (VAR1 *)malloc(50*sizeof(VAR1));
    
    FUN2(VAR2);
}