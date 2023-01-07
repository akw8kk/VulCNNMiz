static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    
    VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
    FUN2(&VAR2);
}