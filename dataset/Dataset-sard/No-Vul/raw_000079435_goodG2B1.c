static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(0)
    {
        
        FUN2("");
    }
    else
    {
        
        strcpy(VAR1, "");
    }
    if(1)
    {
        
        FUN3(VAR1);
    }
}