static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        char VAR2[10+1] = VAR3;
        
        
        memmove(VAR1, VAR2, (strlen(VAR2) + 1) * sizeof(char));
        FUN3(VAR1);
        free(VAR1);
    }
}