static void FUN1()
{
    char * VAR1;
    char * *VAR2 = &VAR1;
    char * *VAR3 = &VAR1;
    char VAR4[100] = "";
    VAR1 = VAR4;
    {
        char * VAR1 = *VAR2;
        
        strcpy(VAR1, "");
        *VAR2 = VAR1;
    }
    {
        char * VAR1 = *VAR3;
        
        fprintf(VAR5, VAR1);
    }
}