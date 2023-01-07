static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        strcpy(VAR1, "");
    }
    if(FUN4())
    {
        
        FUN5(VAR1);
    }
}