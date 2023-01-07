static void FUN1()
{
    void * VAR1;
    void (*VAR2) (void *) = VAR3;
    VAR1 = NULL;
    
    VAR1 = (void *)VAR4;
    FUN2(VAR1);
}