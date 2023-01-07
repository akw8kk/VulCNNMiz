static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[100];
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        wmemset(VAR2, VAR4'', 50-1); 
        VAR2[50-1] = VAR4''; 
    }
    {
        wchar_t VAR5[50] = VAR4"";
        
        wcscpy(VAR5, VAR2);
        FUN2(VAR2);
    }
}