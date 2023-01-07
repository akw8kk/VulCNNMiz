static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    while(1)
    {
        
        strcpy(VAR1, "");
        break;
    }
    while(1)
    {
        
        FUN2(VAR1);
        break;
    }
}