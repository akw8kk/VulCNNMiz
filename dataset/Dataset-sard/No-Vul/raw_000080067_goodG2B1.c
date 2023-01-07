static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(VAR3)
    {
        
        FUN2("");
    }
    else
    {
        
        strcpy(VAR1, "");
    }
    if(VAR4)
    {
        {
            char VAR5[100] = "";
            
            FUN3(VAR5, 100-1, VAR1);
            FUN2(VAR5);
        }
    }
}