void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    if(VAR3==5)
    {
        
        wmemset(VAR1, VAR4'', 100-1); 
        VAR1[100-1] = VAR4''; 
    }
    {
        wchar_t VAR5[50] = VAR4"";
        size_t VAR6, VAR7;
        VAR7 = wcslen(VAR1);
        
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            VAR5[VAR6] = VAR1[VAR6];
        }
        VAR5[50-1] = VAR4''; 
        FUN2(VAR1);
    }
}