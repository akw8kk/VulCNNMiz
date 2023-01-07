static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[50];
    wchar_t VAR3[100];
    if(VAR4)
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR5''; 
    }
    {
        size_t VAR6;
        wchar_t VAR7[100];
        wmemset(VAR7, VAR5'', 100-1); 
        VAR7[100-1] = VAR5''; 
        
        for (VAR6 = 0; VAR6 < 100; VAR6++)
        {
            VAR1[VAR6] = VAR7[VAR6];
        }
        VAR1[100-1] = VAR5''; 
        FUN2(VAR1);
    }
}