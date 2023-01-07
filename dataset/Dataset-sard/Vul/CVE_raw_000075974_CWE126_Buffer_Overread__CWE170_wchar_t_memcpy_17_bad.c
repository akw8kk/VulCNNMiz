void FUN1()
{
    int VAR1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            wchar_t VAR2[150], VAR3[100];
            
            wmemset(VAR2, VAR4'', 149);
            VAR2[149] = VAR4'';
            memcpy(VAR3, VAR2, 99*sizeof(wchar_t));
            
            FUN2(VAR3);
        }
    }
}