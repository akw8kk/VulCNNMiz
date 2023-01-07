static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    if(5==5)
    {
        
        strcpy(VAR1, "");
    }
    if(5==5)
    {
        {
            char VAR3[100] = "";
            
            FUN2(VAR3, 100-1, VAR1);
            FUN3(VAR3);
        }
    }
}