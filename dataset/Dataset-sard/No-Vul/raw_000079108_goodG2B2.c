static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        
        strcpy(VAR1, "");
    }
    if(FUN2())
    {
        
        fprintf(VAR3, VAR1);
    }
}