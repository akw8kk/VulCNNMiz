static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL; 
    
    VAR2 = (VAR1 *)calloc(1, sizeof(VAR1));
    VAR3 = VAR2;
    FUN2();
}