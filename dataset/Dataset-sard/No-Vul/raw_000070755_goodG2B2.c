static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        char VAR3[10+1] = VAR4;
        
        strcpy(VAR1, VAR3);
        FUN3(VAR1);
        free(VAR1);
    }
}