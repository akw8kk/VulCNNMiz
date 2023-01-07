static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(1)
    {
        
        strcpy(VAR1, "");
    }
    if(1)
    {
        FUN2(VAR1, VAR1);
    }
}