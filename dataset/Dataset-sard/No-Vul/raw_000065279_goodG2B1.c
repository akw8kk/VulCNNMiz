static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        size_t VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR4'', 100-1); 
        VAR6[100-1] = VAR4''; 
        
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR1[VAR5] = VAR6[VAR5];
        }
        VAR1[100-1] = VAR4''; 
        FUN4(VAR1);
    }
}