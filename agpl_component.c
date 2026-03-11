/*
 * Example Component
 * Licensed under the GNU Affero General Public License v3.0 (AGPL-3.0)
 *
 * This file is intentionally licensed under AGPL-3.0 which requires that
 * any modifications and network use of this program must provide access
 * to the complete corresponding source code.
 *
 * Copyright (C) 2026
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>

void agpl_component() {
    printf("AGPL licensed component running.\n");
}

int main() {
    agpl_component();
    return 0;
}
