def check_registration_rules(**kwargs):
    up = []

    for username, password in kwargs.items():
        if username != 'quera' and username != 'codecup' and len(username) >= 4:
            if len(password) >= 6 and not password.isnumeric():
                up.append(username)
    return up
